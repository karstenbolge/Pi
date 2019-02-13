#ifndef _WINDOW_H_
#define _WINDOW_H_

#include <X11/Xlib.h>
#include <X11/Xutil.h>
#include <X11/Xos.h>

#include <stdio.h>
#include <stdlib.h>

#include "../hdr/platform.h"

Display *display;
int screen;
Window win;
GC gc;

XColor colorRed, colorWhite, colorBlue, colorGreen, colorBlack;
Colormap screenColorMap;

void createWindow();
void closeWindow();
void redrawWindow();

void refreshDmd();

void windowTestDraw();

#endif