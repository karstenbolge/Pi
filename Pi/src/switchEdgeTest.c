#include "../hdr/display.h"
#include "../hdr/switchEdgeTest.h"

#define MODE_OFF 0
#define MODE_SHOW 1

uint8_t inMode = MODE_OFF;

void showMatrix(uint16_t oldInputRegister[8]) {
  if (inMode == MODE_SHOW) {
    clearScreen();
    printf("  0 1 2 3 4 5 6 7 8 9 a b c d e f\n");
    for(int i = 0; i < 8; i++) {
      printf("%d ", i);
      for(int j = 0; j < 16; j++) {
        if (oldInputRegister[i] & 1 << j) {
          printf("X ");
        } else {
          printf(". ");
        }
      }
      printf("\n");
    }
  }
}

void switchEdgeTestOpen() {
  inMode = MODE_SHOW;
}

void switchEdgeTestUp() {
}

void switchEdgeTestDown() {
}

void switchEdgeTestEnter() {
}

void switchEdgeTestExit() {
  inMode = MODE_OFF;
}