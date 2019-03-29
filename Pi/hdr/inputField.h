#ifndef _INPUT_FIELD_H_
#define _INPUT_FIELD_H_

void openInputField(char *pStr, uint8_t length);
void closeInpuField();
void inputFieldUp();
void inputFieldDown();
void inputFieldTick(uint8_t tick);
void displayInputFieldAt(uint8_t line);
char *getInputFieldValue();

#endif