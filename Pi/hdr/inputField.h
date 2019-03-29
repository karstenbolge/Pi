#ifndef _INPUT_FIELD_H_
#define _INPUT_FIELD_H_

void openInputField(char *pStr, uint8_t line, uint8_t length);
void closeInputField();
void inputFieldUp();
void inputFieldDown();
void inputFieldTick(uint8_t tick);
void displayInputField();
char *getInputFieldValue();
int inputFieldDone();

#endif