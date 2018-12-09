#include <stdio.h>
#include <stdint.h>
#include "../hdr/highScore.h"
#include "../hdr/display.h"
#include "../hdr/menu.h"
#include "../hdr/config.h"

#define IN_MODE_YES 1
#define IN_MODE_NO 0
#define IN_MODE_DONE 2
uint8_t inHighScoreMode;

void show()
{
  clearScreen();
  printf("Clear H.S.T.D\n");
  if (inHighScoreMode == IN_MODE_YES)
    printf("->Yes\n");
  else
    printf("  Yes\n");
  if (inHighScoreMode == IN_MODE_YES)
    printf("  No\n");
  else
    printf("->No\n");
}

void resetHighScoreOpen()
{
  inHighScoreMode = IN_MODE_YES;
  show();
}

void resetHighScoreUp()
{
  if (inHighScoreMode == IN_MODE_DONE)
  {
    return menuExit();
  }

  inHighScoreMode = inHighScoreMode == IN_MODE_YES ? IN_MODE_NO : IN_MODE_YES;
  show();
}

void resetHighScoreDown()
{
  resetHighScoreUp();
}

void resetHighScoreEnter()
{
  if (inHighScoreMode != IN_MODE_YES)
  {
    menuExit();
    return;
  }

  inHighScoreMode = IN_MODE_DONE;
  for (int i = 0; i < 5; i++)
  {
    config.highScore[0].current.score = config.highScore[0].initial.score;
    strcpy(config.highScore[0].current.name, config.highScore[0].initial.name);
  }

  clearScreen();
  printf("H.S.T.D cleared.\n");
}
