#ifndef _PLATFORM_H_
#define _PLATFORM_H_

#include <stdint.h>

#define COLUMN_DATA_PIN 7
#define COLUMN_CLOCK_PIN 8
#define COLUMN_LATCH_PIN 9

#define INPUT_SWITCH_DATA_PIN 1   //green
#define INPUT_SWITCH_CLOCK_PIN 15 //yellow
#define INPUT_SWITCH_LATCH_PIN 16 //White
#define INPUT_SWITCH_ENABLE_PIN 4 //White

uint16_t oldInputRegister[8];
uint16_t newInputRegister;

uint32_t lamps[8];
uint8_t coils[8];

uint8_t leds;
uint8_t column;

void setupWiring();
void updateColumn(uint8_t column);
void updateShiftIn();

void platform();

int getWindowWitdh();
int getWindowHeight();

void (*onBeat)(int);
void onBeatFunction(int beat);

#endif