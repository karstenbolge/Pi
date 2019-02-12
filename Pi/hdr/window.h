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

XColor color_red, color_white, color_blue, color_green, color_black;
Colormap screen_colormap;

void createWindow();
void closeWindow();
void redrawWindow();

void refreshDmd();

void windowTestDraw();

#endif