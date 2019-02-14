#ifndef _SOUND_H_
#define _SOUND_H_

// https://freewavesamples.com/
#define WRONG_SOUND 0
#define OK_SOUND 1
#define ENTER_SOUND 2
#define BACK_SOUND 3

#define NUMBER_OF_SOUNDS 4

#define MAX_VOLUMN 20

void *initAlsa(void *pSoundNumber);
void initSounds();
void initSounds();
void playSoundWrong();
void playSoundOk();
void playSoundEnter();
void playSoundBack();
void volumnUp();
void volumnDown();

#endif