#include "../hdr/platform.h"
#include "../hdr/window.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/select.h>
#include <termios.h>

struct termios origTermios;

void resetTerminalMode()
{
  tcsetattr(0, TCSANOW, &origTermios);
}

void setupWiring()
{
  struct termios newTermios;

  /* take two copies - one for now, one for later */
  tcgetattr(0, &origTermios);
  memcpy(&newTermios, &origTermios, sizeof(newTermios));

  /* register cleanup handler, and set the new terminal mode */
  atexit(resetTerminalMode);
  cfmakeraw(&newTermios);
  tcsetattr(0, TCSANOW, &newTermios);
}

void updateColumn(uint8_t column)
{
}

int keyboardHit()
{
  struct timeval tv = {0L, 0L};
  fd_set fds;
  FD_ZERO(&fds);
  FD_SET(0, &fds);
  return select(1, &fds, NULL, NULL, &tv);
}

int getch()
{
  int r;
  unsigned char c;
  if ((r = read(0, &c, sizeof(c))) < 0)
  {
    return r;
  }
  else
  {
    return c;
  }
}

void updateShiftIn()
{
  newInputRegister = 0;

  if (column != 2)
  {
    return;
  }

  if (keyboardHit())
  {
    switch (getch())
    {
    case 120:
      exit(0);
      break;
    case 97:
      // set escape pressed
      newInputRegister = 1 << 2;
      break;
    case 115:
      // set up pressed
      newInputRegister = 1 << 12;
      break;
    case 100:
      // set down pressed
      newInputRegister = 1 << 15;
      break;
    case 102:
      // set enter pressed
      newInputRegister = 1 << 3;
      printf("Enter\n");
      break;
    default:
      printf("get char %d\n", getch());

      break;
    }
  }
}

void platform()
{
  printf("Running on Ubuntu\n");
}

char *getDefaultFont()
{
  return "6x10";
}

int getWindowWitdh()
{
  return 800;
}

int getWindowHeight()
{
  return 480;
}
