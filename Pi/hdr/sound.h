#ifndef _SOUND_H_
#define _SOUND_H_

// https://freewavesamples.com/
#define WRONG_SOUND 0
#define OK_SOUND 1
#define ENTER_SOUND 2
#define BACK_SOUND 3

#define MUSIC_BASS_DRUM 4
#define MUSIC_SNARE 5
#define MUSIC_HI_HAT 6
#define MUSIC_HI_HAT_CLOSED 7

#define NUMBER_OF_SOUNDS 8

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

void musicBassDrum();
void musicSnare();
void musicHiHat();
void musicHiHatClosed();

void musicBeat(int beat);

#endif