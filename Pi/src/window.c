// sudo apt install libx11-dev

#include "../hdr/window.h"
#include "../hdr/display.h"
#include "../graphics/image.h"

XFontStruct *fontinfo;
unsigned long black, white;

void setupColors()
{
  // get access to the screen's color map.
  screenColorMap = DefaultColormap(display, DefaultScreen(display));

  // setup colors
  int rc = XAllocNamedColor(display, screenColorMap, "blue", &colorBlue, &colorBlue);
  if (rc == 0)
  {
    fprintf(stderr, "XAllocNamedColor - failed to allocated 'blue' color.\n");
    exit(1);
  }

  rc = XAllocNamedColor(display, screenColorMap, "red", &colorRed, &colorRed);
  if (rc == 0)
  {
    fprintf(stderr, "XAllocNamedColor - failed to allocated 'red' color.\n");
    exit(1);
  }

  rc = XAllocNamedColor(display, screenColorMap, "green", &colorGreen, &colorGreen);
  if (rc == 0)
  {
    fprintf(stderr, "XAllocNamedColor - failed to allocated 'green' color.\n");
    exit(1);
  }

  rc = XAllocNamedColor(display, screenColorMap, "white", &colorWhite, &colorWhite);
  if (rc == 0)
  {
    fprintf(stderr, "XAllocNamedColor - failed to allocated 'white' color.\n");
    exit(1);
  }

  rc = XAllocNamedColor(display, screenColorMap, "black", &colorBlack, &colorBlack);
  if (rc == 0)
  {
    fprintf(stderr, "XAllocNamedColor - failed to allocated 'black' color.\n");
    exit(1);
  }

  rc = XAllocNamedColor(display, screenColorMap, "yellow", &colorYellow, &colorYellow);
  if (rc == 0)
  {
    fprintf(stderr, "XAllocNamedColor - failed to allocated 'Yellow' color.\n");
    exit(1);
  }
}

void createWindow()
{
  /* get the colors black and white (see section for details) */

  display = XOpenDisplay((char *)0);
  screen = DefaultScreen(display);
  printf("screen %d \n", screen);
  black = BlackPixel(display, screen);
  printf("black %ld \n", black);
  white = WhitePixel(display, screen);
  printf("white %ld \n", white);

  win = XCreateWindow(display, DefaultRootWindow(display), 0, 0, getWindowWitdh(), getWindowHeight(), 0, 0, 0, NULL, 0, NULL);
  //win = XCreateSimpleWindow(display, DefaultRootWindow(display), 0, 0, getWindowWitdh(), getWindowHeight(), 5, white, black);

  XSetStandardProperties(display, win, "DrFunkenstein", "Hi", None, NULL, 0, NULL);
  XSelectInput(display, win, ExposureMask | ButtonPressMask | KeyPressMask);
  gc = XCreateGC(display, win, 0, 0);
  printf("created gc %ld\n", (long)gc);

  fontinfo = XLoadQueryFont(display, getDefaultFont());
  printf("font %ld\n", (long)fontinfo);
  int rc = XSetFont(display, gc, fontinfo->fid);
  XSetBackground(display, gc, white);
  XSetForeground(display, gc, black);
  XClearWindow(display, win);
  XMapRaised(display, win);

  printf("%ld %ld\n", (long)display, win);

  XEvent exposed;
  exposed.type = 0;
  while (exposed.type != 12)
  {
    XNextEvent(display, &exposed);
    printf("EVEnt %d\n", exposed.type);
  }

  XWindowAttributes xwa;
  XGetWindowAttributes(display, win, &xwa);
  printf("window position : %d %d\n", xwa.x, xwa.y);

  XSetForeground(display, gc, WhitePixel(display, screen));
  rc = XDrawLine(display, win, gc, 10, 10, 10, 190); //from-to
  printf("drawline now %d\n", rc);
  XDrawLine(display, win, gc, 10, 190, 190, 190); //from-to

  setupColors();
};

void closeWindow()
{
  XFreeFont(display, fontinfo);
  XFreeGC(display, gc);
  XDestroyWindow(display, win);
  XCloseDisplay(display);
  exit(1);
};

void redrawWindow()
{
  XClearWindow(display, win);
};

void windowTestDraw()
{
  char text[255];
  strcpy(text, "X is FUN!");
  printf("win %ld\n", win);
  printf("display %ld\n", (long)display);
  XSetForeground(display, gc, rand() % 120 % 255);
  printf("gc %ld\n", (long)gc);
  printf("text %s\n", text);
  XDrawString(display, win, gc, 10, 10, text, strlen(text));
}

void clearDmd()
{
  memset(dmd, 0, sizeof dmd);
}

void refreshDmd()
{
  XSetForeground(display, gc, colorBlack.pixel);
  XFillRectangle(display, win, gc, 0, 0, 799, 479);

  XSetForeground(display, gc, colorRed.pixel);
  for (int y = 0; y < DMD_HEIGHT; y++)
  {
    for (int x = 0; x < DMD_WIDTH; x++)
    {
      if (dmd[x][y].red == 255 && dmd[x][y].green == 255 && dmd[x][y].blue == 0)
      {
        // TODO OPTIMIZE
        XSetForeground(display, gc, colorYellow.pixel);
        XFillRectangle(display, win, gc, 5 * x + 1, 5 * y, 2, 4);
        XFillRectangle(display, win, gc, 5 * x, 5 * y + 1, 4, 2);
      }
      else if (dmd[x][y].red || dmd[x][y].green || dmd[x][y].blue)
      {
        // TODO OPTIMIZE
        XSetForeground(display, gc, colorRed.pixel);
        XFillRectangle(display, win, gc, 5 * x + 1, 5 * y, 2, 4);
        XFillRectangle(display, win, gc, 5 * x, 5 * y + 1, 4, 2);
      }
    }
  }
}

void loadImage()
{
  // ./graphics/SoulTrain/vlcsnap-00035.png
  // https://github.com/ImageMagick/png/blob/master/example.c
  //https://www.disk91.com/2014/technology/programming/use-create-thegimp-header-file-format/
  //https://sighack.com/post/averaging-rgb-colors-the-right-way

  /*int screen_num = DefaultScreen(display);
  Visual *visual = DefaultVisual(display, screen_num);
  char *data = (char *)malloc(256 * 256 * 4);

  XImage *ximage = XCreateImage(display, visual, DefaultDepth(display, screen_num), ZPixmap, 0, data, 256, 256, 32, 0);

  int count = 256 * 256;
  for (int i = 0; i < count; ++i)
  {
    XAddPixel(ximage, (long)i);
  }
  printf("end\n");*/

  //return;

  int k = 0;
  char *data = header_data;
  //uint8_t pixel_data2[640 * 360 * 3 + 1];
  for (int i = 0; i < 640; i++)
  {
    for (int j = 0; j < 360; j++)
    {
      HEADER_PIXEL(data, &header_data2[k]);
      header_data2[k + 3] = header_data2[k + 2]; // header_data2[k];
      header_data2[k + 2] = header_data2[k];     //header_data2[k + 1]; // red
      header_data2[k + 1] = header_data2[k + 1]; //header_data2[k + 2]; // green
      header_data2[k] = header_data2[k + 3];     // blue
      header_data2[k + 3] = 0;

      k = k + 4;
    }
  }

  printf("image %d %d %d\n", gimp_image.width, gimp_image.height, gimp_image.bytes_per_pixel);

  printf("1 pixel %d %d %d %d\n", *header_data, *(header_data + 1), *(header_data + 2), *(header_data + 3));
  printf("1 pixel %d %d %d\n", header_data2[0], header_data2[1], header_data2[2]);

  int screen_num = DefaultScreen(display);
  Visual *visual = DefaultVisual(display, screen_num);
  // XImage *ximage = XCreateImage(display, visual, DefaultDepth(display, screen_num), ZPixmap, 0, header_data, 640, 360, 32, 0);
  // XImage *ximage = XCreateImage(display, visual, DefaultDepth(display, screen_num), ZPixmap, 0, header_data2, 640, 360, 32, 0);

  //#include "../graphics/SoulTrain/00150-v4.h"
  //  XImage *ximage = XCreateImage(display, visual, DefaultDepth(display, screen_num), ZPixmap, 0, image00150, 800, 450, 32, 0);
  XImage *ximage; // = XCreateImage(display, visual, DefaultDepth(display, screen_num), ZPixmap, 0, getImage00150(), 800, 450, 32, 0);
  printf("can create image\n");

  XPutImage(display, win, gc, ximage, 0, 0, 0, 0, 800, 450);

  // video 150, 152, 155, 158, 161, 163
}

void showImage(char *image)
{
  int screen_num = DefaultScreen(display);
  Visual *visual = DefaultVisual(display, screen_num);
  XImage *ximage = XCreateImage(display, visual, DefaultDepth(display, screen_num), ZPixmap, 0, image, 800, 450, 32, 0);
  XPutImage(display, win, gc, ximage, 0, 0, 0, 0, 800, 450);
}

void refreshDmd2()
{
  int rc;
  printf("refresh %ld %ld\n", (long)display, win);
  XSetForeground(display, gc, WhitePixel(display, screen));
  rc = XDrawLine(display, win, gc, 10, 10, 190, 190); //from-to
  printf("XDrawLine %d\n", rc);
  rc = XDrawLine(display, win, gc, 10, 190, 190, 10); //from-to
  printf("XDrawLine %d\n", rc);

  printf("refresh %d \n", rand() % 120 % 255);
  XSetForeground(display, gc, rand() % 120 % 255);
  XDrawString(display, win, gc, 10, 10, "YAHOO", 5);

  printf("refresh\n");
  XFillRectangle(display, win, gc, 0, 0, 800, 480);

  XSetForeground(display, gc, 180);
  XFillRectangle(display, win, gc, 100, 100, 600, 280);

  for (int y = 0; y < DMD_HEIGHT; y++)
  {
    for (int x = 0; x < DMD_WIDTH; x++)
    {
    }
  }
}
