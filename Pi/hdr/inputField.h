#ifndef _INPUT_FIELD_H_
#define _INPUT_FIELD_H_

#define INPUT_TYPE_ALL 0
#define INPUT_TYPE_UPPERCASE 1

void openInputField(char *pStr, uint8_t line, uint8_t length, uint8_t type);
void closeInputField();
void inputFieldUp();
void inputFieldDown();
void inputFieldTick(uint8_t tick);
void displayInputField();
char *getInputFieldValue();
int inputFieldDone();

void setStaticStr(char *pStr1, char *pStr2);

#endif