#include <stdint.h>
#include "../hdr/sound.h"

uint8_t volumne = 8;

void playSoundWrong() {
}

void volumnUp() {
  if (volumne < 20) volumne++;
}

void volumnDown() {
  if (volumne > 2) volumne--;
}
