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

/* include some silly stuff */
#include <stdio.h>
#include <stdlib.h>

#define MAX_FONTS 30000
/* here are our X variables */
Display *dis;
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

  init_x();

  /* look for events forever... */
  while (1)
  {
    /* get the next event and stuff it into our event variable.
		   Note:  only events we set the mask for are detected!
		*/
    XNextEvent(dis, &event);
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
        XSetForeground(dis, gc, WhitePixel(dis, screen));
        int rc;
        rc = XDrawLine(dis, win, gc, 10, 10, 190, 190); //from-to
        printf("drawline %d\n", rc);
        XDrawLine(dis, win, gc, 10, 190, 190, 10); //from-to
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
      XSetForeground(dis, gc, rand() % event.xbutton.x % 255);
      XDrawString(dis, win, gc, x, y, text, strlen(text));
    }
  }
}

void init_x()
{
  /* get the colors black and white (see section for details) */
  unsigned long black, white;

  dis = XOpenDisplay((char *)0);
  screen = DefaultScreen(dis);
  printf("screen %d \n", screen);
  black = BlackPixel(dis, screen),
  printf("black %ld \n", black);
  white = WhitePixel(dis, screen);
  printf("white %ld \n", white);
  //win = XCreateSimpleWindow(dis, DefaultRootWindow(dis), 0, 0, 300, 300, 5, black, white);
  win = XCreateWindow(dis, DefaultRootWindow(dis), 0, 0, 400, 300, 0, 0, 0, NULL, 0, NULL);
  XSetStandardProperties(dis, win, "Howdy", "Hi", None, NULL, 0, NULL);
  XSelectInput(dis, win, ExposureMask | ButtonPressMask | KeyPressMask);
  gc = XCreateGC(dis, win, 0, 0);

  //showFonts();

  fontinfo = XLoadQueryFont(dis, "6x13"); // 6x10 ubuntu font size
  printf("font %ld\n", (long)fontinfo);
  int rc = XSetFont(dis, gc, fontinfo->fid);
  XSetBackground(dis, gc, white);
  XSetForeground(dis, gc, black);
  XClearWindow(dis, win);
  XMapRaised(dis, win);

  //Herfra
  XWindowAttributes xwa;
  XGetWindowAttributes(dis, win, &xwa);
  printf("%d %d\n", xwa.x, xwa.y);
  printf("%ld %ld\n", (long)dis, win);

  // wait for event created
  XNextEvent(dis, &event);
  printf("EVEnt %d %d\n", event.type, event.type);
  // start drawing
  XSetForeground(dis, gc, WhitePixel(dis, screen));
  rc = XDrawLine(dis, win, gc, 10, 10, 10, 190); //from-to
  printf("drawline now %d\n", rc);
  XDrawLine(dis, win, gc, 10, 190, 190, 190); //from-to

  return;

  Atom wm_state = XInternAtom(dis, "_NET_WM_STATE", False);
  Atom fullscreen = XInternAtom(dis, "_NET_WM_STATE_FULLSCREEN", False);

  XEvent xev;
  memset(&xev, 0, sizeof(xev));
  xev.type = ClientMessage;
  xev.xclient.window = win;
  xev.xclient.message_type = wm_state;
  xev.xclient.format = 32;
  xev.xclient.data.l[0] = 1;
  xev.xclient.data.l[1] = fullscreen;
  xev.xclient.data.l[2] = 0;

  XMapWindow(dis, win);

  XSendEvent(dis, DefaultRootWindow(dis), False, SubstructureRedirectMask | SubstructureNotifyMask, &xev);
};

void showFonts()
{
  int nFonts;
  char **szaFontNames;
  szaFontNames = XListFonts(dis, "*", MAX_FONTS, &nFonts);
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
  Atom wm_state = XInternAtom(dis, "_NET_WM_STATE", False);
  Atom fullscreen = XInternAtom(dis, "_NET_WM_STATE_FULLSCREEN", False);

  XEvent xev;
  memset(&xev, 0, sizeof(xev));
  xev.type = ClientMessage;
  xev.xclient.window = win;
  xev.xclient.message_type = wm_state;
  xev.xclient.format = 32;
  xev.xclient.data.l[0] = 1;
  xev.xclient.data.l[1] = fullscreen;
  xev.xclient.data.l[2] = 0;

  XMapWindow(dis, win);

  XSendEvent(dis, DefaultRootWindow(dis), False, SubstructureRedirectMask | SubstructureNotifyMask, &xev);
}

void close_x()
{
  XFreeFont(dis, fontinfo);
  XFreeGC(dis, gc);
  XDestroyWindow(dis, win);
  XCloseDisplay(dis);
  exit(1);
};

void redraw()
{
  XClearWindow(dis, win);
};
