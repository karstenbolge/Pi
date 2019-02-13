// sudo apt install libx11-dev

#include "../hdr/window.h"
#include "../hdr/display.h"

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
  printf("Blue color mapped %d %d %d\n", colorBlue.red, colorBlue.green, colorBlue.blue);

  rc = XAllocNamedColor(display, screenColorMap, "red", &colorRed, &colorRed);
  if (rc == 0)
  {
    fprintf(stderr, "XAllocNamedColor - failed to allocated 'red' color.\n");
    exit(1);
  }
  printf("red color mapped %d %d %d\n", colorRed.red, colorRed.green, colorRed.blue);

  rc = XAllocNamedColor(display, screenColorMap, "green", &colorGreen, &colorGreen);
  if (rc == 0)
  {
    fprintf(stderr, "XAllocNamedColor - failed to allocated 'green' color.\n");
    exit(1);
  }
  printf("green color mapped %d %d %d\n", colorGreen.red, colorGreen.green, colorGreen.blue);

  rc = XAllocNamedColor(display, screenColorMap, "white", &colorWhite, &colorWhite);
  if (rc == 0)
  {
    fprintf(stderr, "XAllocNamedColor - failed to allocated 'white' color.\n");
    exit(1);
  }
  printf("white color mapped %d %d %d\n", colorWhite.red, colorWhite.green, colorWhite.blue);

  rc = XAllocNamedColor(display, screenColorMap, "black", &colorBlack, &colorBlack);
  if (rc == 0)
  {
    fprintf(stderr, "XAllocNamedColor - failed to allocated 'black' color.\n");
    exit(1);
  }
  printf("black color mapped %d %d %d\n", colorBlack.red, colorBlack.green, colorBlack.blue);
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

void refreshDmd()
{
  XSetForeground(display, gc, colorBlack.pixel);
  XFillRectangle(display, win, gc, 0, 0, 799, 479);

  XSetForeground(display, gc, colorRed.pixel);
  for (int y = 0; y < DMD_HEIGHT; y++)
  {
    for (int x = 0; x < DMD_WIDTH; x++)
    {
      if (dmd[x][y].red || dmd[x][y].green || dmd[x][y].blue)
      {
        XFillRectangle(display, win, gc, 4 * x, 4 * y, 3, 3);
      }
    }
  }
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
