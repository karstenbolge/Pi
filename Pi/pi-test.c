#include "pi.h"
#include <stdlib.h>

int main(void) {
  readConfig();
  
  printf("start");
  
  while(1) {
    switch(getchar()) {
      case 'a': menuExit();
	    break;
      case 's': menuDown();
        break;
      case 'd': menuUp();
        break;
      case 'f': menuEnter();
        break;
	  case 'x': saveConfig(); exit(0);
	    break;
    }      
  }
};