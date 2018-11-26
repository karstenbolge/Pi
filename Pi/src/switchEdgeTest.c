#include "../hdr/display.h"
#include "../hdr/switchEdgeTest.h"

#define MODE_OFF 0
#define MODE_SHOW 1
#define MODE_SHOW_SINGLE 2

uint8_t inMode = MODE_OFF;
uint8_t showColumn, showRow;

char *getSwitchName() {
	switch(showColumn) {
        case 0: 
        case 1: 
        case 2: 
		switch(showColumn) {
			case 0:
			case 1:
			case 2: return "Escape";
			case 3: return "Enter";
			case 4:
			case 5:
			case 6:
			case 7:
			case 8:
			case 9:
			case 10:
			case 11:
			case 12: return "Up";
			case 13:
			case 14:
			case 15: return "Down";
		}
        case 3: 
        case 4: 
        case 5: 
        case 6: 
        case 7: 
				break; 
	}
	
	return "Not used";
}

void showMatrix(uint16_t oldInputRegister[8]) {
  if (inMode != MODE_OFF) {
    clearScreen();
    printf("  0 1 2 3 4 5 6 7 8 9 a b c d e f\n");
    for(int i = 0; i < 8; i++) {
      printf("%d ", i);
      for(int j = 0; j < 16; j++) {
        if (oldInputRegister[i] & 1 << j) {
			if (inMode == MODE_SHOW_SINGLE && showColumn == i && showRow == j) {
				printf("X ");
			} else {
				printf("x ");
			}
        } else {
			if (inMode == MODE_SHOW_SINGLE && showColumn == i && showRow == j) {
				printf("- ");
			} else {
				printf(". ");
			}
        }
      }
      printf("\n");
	  
	  if (inMode == MODE_SHOW_SINGLE) {
		  printf("%s\n", getSwitchName());
	  }
    }
  }
}

void switchEdgeTestOpen() {
  inMode = MODE_SHOW;
}

void switchEdgeTestOpenSingle() {
  inMode = MODE_SHOW_SINGLE;
  showColumn = 0;
  showRow = 0;
}

void switchEdgeTestUp() {
	showColumn--;
	if (showColumn < 0) {
		showColumn = 7;
		showRow--;
	}

	if (showRow < 0) {
		showRow = 15;
	}
}

void switchEdgeTestDown() {
	showColumn++;
	if (showColumn > 7) {
		showColumn = 0;
		showRow++;
	}

	if (showRow > 15) {
		showRow = 0;
	}
}

void switchEdgeTestEnter() {
}

void switchEdgeTestExit() {
  inMode = MODE_OFF;
}