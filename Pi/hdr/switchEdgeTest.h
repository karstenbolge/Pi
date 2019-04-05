#ifndef _SWITCHEDGETEST_H_
#define _SWITCHEDGETEST_H_

#include <stdio.h>
#include <stdint.h>

void showMatrix(uint16_t oldInputRegister[8]);
void switchEdgeLevelTestOpen();
void switchEdgeTestOpenSingle();
void switchEdgeTestOpen();
void switchEdgeTestUp();
void switchEdgeTestDown();
void switchEdgeTestEnter();
void switchEdgeTestExit();

void switchBeat(uint8_t tick);

#endif