#include "pi.h"
#include<stdio.h>

int main(void) {
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
    }      
  }
};