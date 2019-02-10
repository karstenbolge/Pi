// sudo apt install libx11-dev

#include "../hdr/window.h"
#include "../hdr/display.h"

int screen;
Window win;
GC gc;
XFontStruct *fontinfo;
unsigned long black, white;

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

//  win = XCreateWindow(display, DefaultRootWindow(display), 0, 0, getWindowWitdh(), getWindowHeight(), 0, 0, 0, NULL, 0, NULL);
  win = XCreateSimpleWindow(display,DefaultRootWindow(display),0,0, 400, 100, 5, white, black);

  XSetStandardProperties(display, win, "DrFunkenstein", "Hi", None, NULL, 0, NULL);
  XSelectInput(display, win, ExposureMask | ButtonPressMask | KeyPressMask);
  gc = XCreateGC(display, win, 0, 0);
  printf("created gc %d\n", gc);

  fontinfo = XLoadQueryFont(display, getDefaultFont());
  printf("font %ld\n", (long)fontinfo);
  int rc = XSetFont(display, gc, fontinfo->fid);
  XSetBackground(display, gc, white);
  XSetForeground(display, gc, black);
  XClearWindow(display, win);
  XMapRaised(display, win);

  XWindowAttributes xwa;
  XGetWindowAttributes(display, win, &xwa);
  printf("%d %d\n", xwa.x, xwa.y);

  printf("%ld %ld\n", (long)display, win);

  XEvent exposed;
  exposed.type = 0;
  while (exposed.type != 12)
  {
    XNextEvent(display, &exposed);
    printf("EVEnt %d\n", exposed.type);
  }

  XSetForeground(display, gc, WhitePixel(display, screen));
  rc = XDrawLine(display, win, gc, 10, 10, 10, 190); //from-to
  printf("drawline now %d\n", rc);
  XDrawLine(display, win, gc, 10, 190, 190, 190); //from-to
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
printf("win %d\n", win);
printf("display %d\n", display);
      XSetForeground(display, gc, rand() % 120 % 255);
printf("gc %d\n", gc);
printf("text %s\n", text);
      XDrawString(display, win, gc, 10, 10, text, strlen(text));
}

void refreshDmd()
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
