#include <stdio.h>
#include "highScore.h"
#include "display.h"
#include "menu.h"
#include "config.h"

#define IN_MODE_YES 1
#define IN_MODE_NO 0
#define IN_MODE_DONE 2
uint8_t inMode;

void show() {
  clearScreen();
  printf("Clear H.S.T.D\n");
  if (inMode == IN_MODE_YES) printf("->Yes\n");
  else printf("  Yes\n");
  if (inMode == IN_MODE_YES) printf("  No\n");
  else printf("->No\n");
}

void resetHighScoreOpen() {
  inMode = IN_MODE_YES;
  show();
}

void resetHighScoreUp() {
  if (inMode == IN_MODE_DONE) {
    return menuExit();    	  
  }
  
  inMode = inMode == IN_MODE_YES ? IN_MODE_NO : IN_MODE_YES;
  show();
}

void resetHighScoreDown(){
  resetHighScoreUp();
}

void resetHighScoreEnter() {
  if (inMode != IN_MODE_YES) {
    menuExit();
	return;
  }
  
  inMode = IN_MODE_DONE;
  for(int i = 0; i < 5; i++) {
    config.highScore[0].current.score = config.highScore[0].initial.score;
	strcpy(config.highScore[0].current.name, config.highScore[0].initial.name);
  }
  
  clearScreen();
  printf("H.S.T.D cleared.\n");
}
