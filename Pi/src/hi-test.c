/*
http://math.msu.su/~vvb/2course/Borisenko/CppProjects/GWindow/xintro.html
https://www.geeks3d.com/20120102/programming-tutorial-simple-x11-x-window-code-sample-for-linux-and-mac-os-x/

sudo apt install libx11-dev
	Remember to compile try:
		1) gcc hi.c -o hi -lX11
		2) gcc hi.c -I /usr/include/X11 -L /usr/X11/lib -lX11
		3) gcc hi.c -I /where/ever -L /who/knows/where -l X11

	Brian Hammond 2/9/96.    Feel free to do with this as you will!
*/

/* include the X library headers */
#include <X11/Xlib.h>
#include <X11/Xutil.h>
#include <X11/Xos.h>

#include "../hdr/window.h"

#define MAX_FONTS 30000
/* here are our X variables */
Display *display;
int screen;
Window win;
GC gc;
XFontStruct *fontinfo;
XEvent event; /* the XEvent declaration !!! */

/* here are our X routines declared! */
void init_x();
void close_x();
void full_x();
void redraw();
void showFonts();

int main()
{
  KeySym key;     /* a dealie-bob to handle KeyPress Events */
  char text[255]; /* a char buffer for KeyPress Events */

  //init_x();
  createWindow();

  // Get the mouse cursor position
  // TODO: use this to control input in ubuntu updateShiftIn
  int win_x, win_y, root_x, root_y = 0;
  unsigned int mask = 0;
  Window child_win, root_win;
  XQueryPointer(display, XRootWindow(display, screen),
                &child_win, &root_win,
                &root_x, &root_y, &win_x, &win_y, &mask);

  printf("Cursor %d %d\n", win_x, win_y);
  printf("Cursor %d %d\n", root_x, root_y);
  /* look for events forever... */
  while (1)
  {
    /* get the next event and stuff it into our event variable.
		   Note:  only events we set the mask for are detected!
		*/
    XNextEvent(display, &event);
    printf("XNextEvent %d\n", event.type);

    if (event.type == Expose && event.xexpose.count == 0)
    {
      /* the window was exposed redraw it! */
      redraw();
    }
    if (event.type == KeyPress &&
        XLookupString(&event.xkey, text, 255, &key, 0) == 1)
    {
      /* use the XLookupString routine to convert the invent
		   KeyPress data into regular text.  Weird but necessary...
		*/
      if (text[0] == 'r')
      {
        printf("redraw\n");
        redraw();
      }
      if (text[0] == 'q')
      {
        close_x();
      }
      if (text[0] == 'f')
      {
        full_x();
      }
      if (text[0] == 'a')
      {
        XSetForeground(display, gc, WhitePixel(display, screen));
        int rc;
        rc = XDrawLine(display, win, gc, 10, 10, 190, 190); //from-to
        printf("drawline %d\n", rc);
        XDrawLine(display, win, gc, 10, 190, 190, 10); //from-to
      }
      else
      {
        printf("You pressed the %c key!\n", text[0]);
      }
    }
    if (event.type == ButtonPress)
    {
      /* tell where the mouse Button was Pressed */
      int x = event.xbutton.x,
          y = event.xbutton.y;

      strcpy(text, "X is FUN!");
      XSetForeground(display, gc, rand() % event.xbutton.x % 255);
      XDrawString(display, win, gc, x, y, text, strlen(text));
    }
  }
}

void init_x()
{
  /* get the colors black and white (see section for details) */
  unsigned long black, white;

  display = XOpenDisplay((char *)0);
  screen = DefaultScreen(display);
  printf("screen %d \n", screen);
  black = BlackPixel(display, screen),
  printf("black %ld \n", black);
  white = WhitePixel(display, screen);
  printf("white %ld \n", white);
  //win = XCreateSimpleWindow(display, DefaultRootWindow(display), 0, 0, 300, 300, 5, black, white);
  win = XCreateWindow(display, DefaultRootWindow(display), 0, 0, 400, 300, 0, 0, 0, NULL, 0, NULL);
  XSetStandardProperties(display, win, "Howdy", "Hi", None, NULL, 0, NULL);
  XSelectInput(display, win, ExposureMask | ButtonPressMask | KeyPressMask);
  gc = XCreateGC(display, win, 0, 0);

  //showFonts();

  fontinfo = XLoadQueryFont(display, "6x13"); // 6x10 ubuntu font size
  printf("font %ld\n", (long)fontinfo);
  int rc = XSetFont(display, gc, fontinfo->fid);
  XSetBackground(display, gc, white);
  XSetForeground(display, gc, black);
  XClearWindow(display, win);
  XMapRaised(display, win);

  //Herfra
  XWindowAttributes xwa;
  XGetWindowAttributes(display, win, &xwa);
  printf("%d %d\n", xwa.x, xwa.y);
  printf("%ld %ld\n", (long)display, win);

  // wait for event created
  XNextEvent(display, &event);
  printf("EVEnt %d %d\n", event.type, event.type);
  // start drawing
  XSetForeground(display, gc, WhitePixel(display, screen));
  rc = XDrawLine(display, win, gc, 10, 10, 10, 190); //from-to
  printf("drawline now %d\n", rc);
  XDrawLine(display, win, gc, 10, 190, 190, 190); //from-to

  return;

  Atom wm_state = XInternAtom(display, "_NET_WM_STATE", False);
  Atom fullscreen = XInternAtom(display, "_NET_WM_STATE_FULLSCREEN", False);

  XEvent xev;
  memset(&xev, 0, sizeof(xev));
  xev.type = ClientMessage;
  xev.xclient.window = win;
  xev.xclient.message_type = wm_state;
  xev.xclient.format = 32;
  xev.xclient.data.l[0] = 1;
  xev.xclient.data.l[1] = fullscreen;
  xev.xclient.data.l[2] = 0;

  XMapWindow(display, win);

  XSendEvent(display, DefaultRootWindow(display), False, SubstructureRedirectMask | SubstructureNotifyMask, &xev);
};

void showFonts()
{
  int nFonts;
  char **szaFontNames;
  szaFontNames = XListFonts(display, "*", MAX_FONTS, &nFonts);
  if (nFonts == MAX_FONTS)
  {
    printf("Many fonts on your system.  Not displaying all.");
  }

  for (int i = 0; i < nFonts; i++)
  {
    printf("%s\n", szaFontNames[i]);
  }

  XFreeFontNames(szaFontNames);
}

void full_x()
{
  Atom wm_state = XInternAtom(display, "_NET_WM_STATE", False);
  Atom fullscreen = XInternAtom(display, "_NET_WM_STATE_FULLSCREEN", False);

  XEvent xev;
  memset(&xev, 0, sizeof(xev));
  xev.type = ClientMessage;
  xev.xclient.window = win;
  xev.xclient.message_type = wm_state;
  xev.xclient.format = 32;
  xev.xclient.data.l[0] = 1;
  xev.xclient.data.l[1] = fullscreen;
  xev.xclient.data.l[2] = 0;

  XMapWindow(display, win);

  XSendEvent(display, DefaultRootWindow(display), False, SubstructureRedirectMask | SubstructureNotifyMask, &xev);
}

void close_x()
{
  XFreeFont(display, fontinfo);
  XFreeGC(display, gc);
  XDestroyWindow(display, win);
  XCloseDisplay(display);
  exit(1);
};

void redraw()
{
  XClearWindow(display, win);
};
